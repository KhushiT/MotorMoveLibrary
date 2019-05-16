# ifndef drive_h
# define drive_hDrive.cpp

class drive
{
  public:
      drive(int enableRight=11, int forwardRight=9, int backwardRight=6, int enableLeft= 10, int forwardLeft = 3, int backwardLeft= 5);
      void forwardFast();
      void backFast();

       int fR, bR, fL, bL, pwmR, pwmL;
  
  private:
};

#endif
