template <class T>
class SmartPtr
{
private:
  T *value;
  int *inc;

public:
  SmartPtr()
  {
    value = nullptr;
    inc = new int;
    *inc = 1;
  }

  T &operator*()
  {
    return *value;
  }
  void reset()
  {
    (*inc)--;

    value = {nullptr};
  }

  SmartPtr &operator=(SmartPtr const &a)
  {
    (*inc)--;
    if (*inc <= 1)
    {

      delete inc;
    }

    value = a.value;
    inc = a.inc;
    *inc = *inc + 1;
    return *this;
  }

  explicit operator bool() const
  {
    return (value != nullptr);
  }

  SmartPtr(T *a)
  {
    value = a;
    inc = new int;
    *inc = 1;
  }

  SmartPtr(SmartPtr const &a)
  {
    if (*inc <= 1)
      delete inc;
    value = a.value;
    inc = a.inc;
    *inc = *inc + 1;
  }

  T *operator->()
  {
    return value;
  }
  ~SmartPtr()
  {
    if (*inc == 1)
    {
      delete value;
      delete inc;
    }
    else if (*inc < 1)
    {
      delete value;
    }
    else
    {
      *inc = *inc - 1;
    }
  }
};
