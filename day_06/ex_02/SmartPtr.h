template <class T>
class SmartPtr
{
private:
  T *value;
  int *inc;

public:
  SmartPtr()
  {
    inc = new int;
    *inc = 0;
  }

  T &operator*()
  {
    return *value;
  }
  void reset()
  {
    value = {nullptr};
  }

  void operator=(SmartPtr const &a)
  {
    value = a.value;
    inc = a.inc;
    *inc = *inc + 1;
  }

  explicit operator bool() const
  {
    return (value != nullptr);
  }

  SmartPtr(T *a)
  {
    value = a;
    inc = new int;
    *inc = 0;
  }

  SmartPtr(SmartPtr const &a)
  {
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
    if (*inc == 0)
    {
      delete value;
    }
    else
    {
      *inc = *inc - 1;
      value = {nullptr};
      inc = {nullptr};
      delete value;
      delete inc;
    }
  }
};
