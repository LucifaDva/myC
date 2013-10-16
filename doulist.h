template <class T> class ListNode{
  T data;
  ListNode<T>* link;
  ListNode<T>* prior;

public:
  ListNode():link(NULL),prior(NULL){};
  ListNode(T value):link(NULL),prior(NULL),data(value){};
  ~ListNode(){};
  void SetLink(ListNode<T>* next);
  void SetPrior(ListNode<T>* pre);
  ListNode<T>* GetLink();
  ListNode<T>* GetPrior();
  T& GetData();
};

template <class T>
void ListNode<T>::SetLink(ListNode<T>* next){
  link = next;
}

template <class T>
void ListNode<T>::SetPrior(ListNode<T>* pre){
  prior = pre;
}

template <class T>
ListNode<T>* ListNode<T>::GetLink(){
  return link;
}

template <class T>
ListNode<T>* ListNode<T>::GetPrior(){
  return prior;
}

template <class T>
T& ListNode<T>::GetData(){
  return data;
}

//双向链表的类的实现
template <class T> class DouList{
  ListNode<T>* head;
  ListNode<T>* tail;
  ListNode<T>* cur;

public:
  DouList();
  ~DouList();
  bool AddTail(T value);
  bool AddHead(T value);
  void RemoveThis(bool direction);
  void RemoveAll();
  void SetBegin();
  int GetCount();
  void TowardCur();
  void BackCur();
  ListNode<T>* GetCur();
  ListNode<T>* GetHead();
  ListNode<T>* GetTail();
  void InsertAfter(T value);
  bool IsEmpty();
  T GetNext();
  T GetPrior();
};

template <class T>
DouList<T>::DouList(){
  head=tail=new ListNode<T>;
  cur = NULL;
  head->SetLink(head);
  tail->SetPrior(tail);
}

template <class T>
bool DouList<T>::AddTail(T value){
  ListNode<T>* add = new ListNode<T>(value);
  tail->SetLink(add);
  add->SetPrior(tail);
  tail = tail->GetLink();
  tail->SetLink(head);
  head->SetPrior(add);
  if(tail!=NULL){
    return true;
  }else{
    return false;
  }
}

template <class T>
bool DouList<T>::AddHead(T value){
  ListNode<T>* add = new ListNode<T>;
  add->SetPrior(head);
  add->SetLink(head->GetLink());
  head->GetLink()->SetPrior(add);
  head->SetLink(add);
  if(tail!=NULL){
    return true;
  }else{
    return false;
  }
}

template <class T>
void DouList<T>::RemoveThis(bool direction){
  if(cur==head){
    if(direction==0){
      cur = cur->GetLink();
    }
    if(direction==1){
      cur = cur->GetPrior();
    }
  }

  ListNode<T>* preCur = NULL;
  ListNode<T>* nextCur = NULL;
  preCur = cur->GetLink();
  nextCur = cur->GetPrior();
}
