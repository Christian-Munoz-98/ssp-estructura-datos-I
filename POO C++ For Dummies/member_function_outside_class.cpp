// Savings - a simple savings account class
class Savings
{
 public:
    int nAccountNumber;
    double dBalance;

    double deposit(double dAmount);
};

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

