// Savings - a simple savings account class
class Savings
{
 public:
    int nAccountNumber;
    double dBalance;
    
    // deposit - deposit an amount to the balance;
    //           deposits must be positive number; return
    //            the resulting balance or zero on error
    double deposit(double dAmount)
    {
        // no negative deposits - that's a withdrawal
        if (dAmount < 0)
        {
            return 0.0;
        }
        // okay - add to the balance and return the total
        dBalance += dAmount;
        return dBalance;
    }
};

// this part appears in a separate Savings.cpp file
double Savings::deposit(double dAmount)
{
    dBalance += dAmount;
    return dBalance;
}

void fn()
{
    // create and initialize two objects
    Savings s1 = {0, 0.0};
    Savings s2 = {1, 0.0};
    // now make a deposit of $100 to one account
    s1.deposit(100.0);
    // and then the other
    s2.deposit(50.0);
}

