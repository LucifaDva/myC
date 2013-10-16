using namespace std;
//链表中每个节点的类的定义
template <class T> class ListNode{
  T data;
  ListNode<T>* Link;

public:
  ListNode():Link(NULL){};
  ListNode(T value):Link(NULL),data(value){};
  ~ListNode(){};
  void SetLink(ListNode<T>* next);
  ListNode<T>* GetLink();
  T& GetData();
};

template <class T>
void ListNode<T>::SetLink(ListNode<T>* next){
  Link=next;
}
template <class T>
ListNode<T>* ListNode<T>::GetLink(){
  return Link;
}
template <class T>
T& ListNode<T>::GetData(){
  return data;
}


//链表的类的定义
template <class T> class List{
  ListNode<T> *head;
  ListNode<T> *tail;

public:
  List();
  ~List(){};

  void Print();
  
  int AddTail(T value);
  bool RemoveTail();
  bool InsertAt(int index,T value);
  bool RemoveAt(int index);
  T& GetAt(int index);

  bool IsEmpty();
  int GetCount();
  void RemoveAll();
  ListNode<T>* GetHead();
  ListNode<T>* GetTail();
  void SetTail(ListNode<T>* newtail);
  ListNode<T>* GetNodeAt(int index);
  ListNode<T>* GetCur();
  ListNode<T>* TowardCur(ListNode<T>* cur);
};
template <class T>
void List<T>::Print(){
  ListNode<T>* cur = head->GetLink();
  while(cur->GetLink()!=NULL){
    cout<<cur->GetData()<<endl;
    cur=cur->GetLink();
  }
  cout<<cur->GetData()<<endl;
}

template <class T>
List<T>::List(){
  head=tail=new ListNode<T>;
  tail->SetLink(NULL);
}
template <class T>
int List<T>::AddTail(T value){
  ListNode<T>* add = new ListNode<T>(value);
  tail->SetLink(add);
  tail = tail->GetLink();
  tail->SetLink(NULL);
  if(tail!=NULL){
    return 0;
  }else{
    return -1;
  }
}

template <class T>
bool List<T>::RemoveTail(){
  return RemoveAt(this->GetCount-1);
}

template <class T>
bool List<T>::InsertAt(int index,T value){
  if(index<0||index>this->GetCount-1){
    cout<<"Wrong Position!"<<endl;
    return false;
  }
  ListNode<T>* current=head;
  while(index){
    current=current->GetLink;
    --index;
  }
  ListNode<T>* add = new ListNode<T>(value);
  add->SetLink( current->GetLink());
  current->SetLink(add);
  if(current->GetLink()!=NULL){
    return true;
  }else{
    return false;
  }
}

template <class T>
bool List<T>::RemoveAt(int index){
  if(index<0||index>this->GetCount-1){
    cout<<"Wrong index!"<<endl;
    return false;
  }
  ListNode<T>* cur,*curPre;
  cur = head;

curPre = cur->GetLink();
  while(index){
    cur=cur->GetLink();
    curPre=curPre->GetLink();
    --index;
  }
  cur->SetLink(curPre->GetLink());
  if(curPre!=NULL){
    return true;
  }else{
    return false;
  }

}

template <class T>
T& List<T>::GetAt(int index){
  if(index<0||index>this->GetCount-1){
    cout<<"Wrong index!"<<endl;
    return false;
  }
  ListNode<T>* cur;
  cur=head->GetLink();
  while(index){
    cur=cur->GetLink();
    --index;
  }
  return cur->GetData();
}

template <class T>
bool List<T>::IsEmpty(){
  return head->GetLink()==NULL;
}

template <class T>
int List<T>::GetCount(){
  int count=0;
  ListNode<T>* cur;
  cur=head->GetLink();
  while(cur->GetLink()!=NULL){
    cur=cur->GetLink();
    ++count;
  }
  return count;
}

template <class T>
void List<T>::RemoveAll(){
  ListNode<T>* cur;
  while(head->GetLink()!=NULL){
    cur=head->GetLink();
    head->SetLink(cur->GetLink());
    delete cur;
  }
  tail=head;
}

template <class T>
ListNode<T>* List<T>::GetHead(){
  return head;
}

template <class T>
ListNode<T>* List<T>::GetTail(){
  return tail;
}

template <class T>
void List<T>::SetTail(ListNode<T>* newtail){
  tail=newtail;
}

template <class T>
ListNode<T>* List<T>::GetNodeAt(int index){
  if(index<0||index>this->GetCount-1){
    cout<<"Wrong index!"<<endl;
    return false;
  }
  ListNode<T>* cur=head->GetLink();
  while(index){
    cur=cur->GetLink();
    --index;
  }
  return cur;
}

template <class T>
ListNode<T>* List<T>::TowardCur(ListNode<T>* cur){
  cur=cur->GetLink();
  return cur;
}
