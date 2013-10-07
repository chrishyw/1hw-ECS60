//Brian Mah, Chris Wang

int main()
{
  int choice;

  do
  {
    choice = GetChoice();
    ct.reset();
    switch(choice)
    {
      case 1: RunList(filename); break;
      case 2: RunCursorList(filename); break;
      case 3: RunStackAr(filename); break;
      case 4: RunStackLi(filename); break;
      case 5: RunQueueAr(filename); break;
      case 6: RunSkipList(filename); break;
    }

    cout << "CPU time: " << ct.cur_CPUTime() << endl;
  } while(choice > 0);

  return 0;
}

public int GetChoice()
{

  return 0;
}

public void RunList(filename)
{

}

public void RunCursorList(filename)
{

}

public void RunStackAr(filename)
{

}

public void RunStackLi(filename)
{

}

public void RunQueueAr(filename)
{

}

public void RunSkipList(filename)
{

}
