class SavingsAccount {
private:
    double savingsBalance;
public:
    SavingsAccount(double balance);
    ~SavingsAccount();
    static double annualInterestRate;
    double calculate_monthly_balance();
    static void modifyInterestRate(double rate);
};

