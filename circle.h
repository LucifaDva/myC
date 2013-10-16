using namespace std;

template <class T> class ListNode{
  T data;
  ListNode<T>* link;

public:
  ListNode():link(NULL){};
  ListNode(T value):link(NULL),data(value){};
  ~ListNode(){};
  void SetLink(ListNode<T>* next);
  ListNode<T>* GetLink();
  T& GetData();
  void SetData(T newdata);
};
template <class T>
void ListNode<T>::SetData(T newdata){
  data = newdata;
}
template <class T>
void ListNode<T>::SetLink(ListNode<T>* next){
  link = next;
}
template <class T>
ListNode<T>* ListNode<T>::GetLink(){
  return link;
}

template <class T>
T& ListNode<T>::GetData(){
  return data;
}




//循环链表的类
template <class T> class CirList{
  ListNode<T>* head;
  ListNode<T>* tail;
  ListNode<T>* cur;

public:
  CirList();
  ~CirList(){};
  bool AddTail(T value);
  void RemoveThis();
  void RemoveAll();
  void SetBegin();
  int GetCount();
  ListNode<T>* GetCur();
  bool IsEmpty();
  T GetNext();
  void SetData(T newdata);
  void Print();
};
template <class T>
void CirList<T>::SetData(T newdata){
  cur->SetData( newdata);
}
template <class T>
void CirList<T>::Print(){
  SetBegin();
  cur->GetLink();
  ListNode<T>* here = cur;
  while(cur->GetLin()!=here){
    cout<<cur->GetNext();
  }
}
template <class T>
CirList<T>::CirList(){
  head=tail=new ListNode<T>;
  cur=NULL;
  head->SetLink(head);
}

template <class T>
bool CirList<T>::AddTail(T value){
  ListNode<T>* add = new ListNode<T>(value);
  tail->SetLink(add);
  tail = tail->GetLink();
  tail->SetLink(head);
  if(tail!=NULL){
    return true;
  }else{
    return false;
  }
}

template <class T>
void CirList<T>::RemoveThis(){
  if(cur==head){
    cur=cur->GetLink();
  }
  ListNode<T>* preCur=cur;
  for(int i=0;i<this->GetCount();i++){
    preCur=preCur->GetLink();
  }
  preCur->SetLink(cur->GetLink());
  cur = preCur->GetLink();
  preCur=NULL;
}

template <class T>
void CirList<T>::RemoveAll(){
  SetBegin();
  int length=GetCount();
  for(int i=0;i<length;i++){
    RemoveThis();
  }
  cur=head;
}

template <class T>
void CirList<T>::SetBegin(){
  cur=head;
}
template <class T>
int CirList<T>::GetCount(){
  int num=0;
  ListNode<T>* here=cur;
  while(cur->GetLink()!=here){
    cur = cur->GetLink();
    ++num;
  }
  cur = cur->GetLink();
  return num;
}

template <class T>
ListNode<T>* CirList<T>::GetCur(){
  return cur;
}

template <class T>
bool CirList<T>::IsEmpty(){
  return head->GetLink()==head;
}

template <class T>
T CirList<T>::GetNext(){
  if(cur==head){
    cur = cur->GetLink();
  }
  T num = cur->GetData();
  cur = cur->GetLink();
  return num;
}
