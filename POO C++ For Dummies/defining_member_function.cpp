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
    
    // withdraw - execute a withdrawal if sufficient funds
    //            are available
    double withdraw(double dAmount)
    {
        if (dBalance < dAmount)
        {
            return 0.0;
        }
        dBalance -= dAmount;
        return dBalance;
    }
};

/*
void fn()
{
    Savings s;
    s.nAccountNumber = 0;
    s.dBalance = 0.0;
}
*/

void fn()
{
    // create and initialize an object s
    Savings s = {0, 0.0};
    // now make a deposit of $100
    s.deposit(100.0);
    // or a withdrawal
    s.withdraw(50.0);
}

