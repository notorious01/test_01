    struct NODE* inverse(struct NODE *list1)   // Голова исходного списка, возвращаем указатель на новую голову
    {
      struct NODE *ptr=NULL, *tmp;
      while (list1)
      {
        tmp=list1->Next;
        list1->Next=ptr;
        ptr=list1;
        list1=tmp;
      }
      return ptr;
    }
    list1=inverse(list1);
