//Homework 2 chapter 10 testing program
//Remember that plenty of tard live kick ass lives and that my first wife was tarded, but she's a piolit now.
#include <iostream>
class rational
{
public:
    void input();
    void output();
    rational();
    rational neg();
    
    rational Add (rational otherFraction);
    rational Sub (rational otherFraction);
    rational Mul (rational otherFraction);
    rational Div (rational otherFraction);
    bool less(rational otherFraction);
private:
    float numerator;
    float denominator;
};



using namespace std;


int main()
{   float num;
    float den;
    rational num1;
    rational num2;
    rational result;
    int choice;
    bool error;
    num1.input();
    num2.input();
    do{
        do{
            error=false;
            cout<<"Enter a number from 1 to 7\n"
            << "1. Displays the sum of the two fractions\n"
            << "2. Displays the difference\n"
            << "3. Displays the product\n"
            << "4. Displays the quotient\n"
            << "5. Displays whether fraction 1< fraction 2\n"
            << "6. Displays the negative of fraction 1\n"
            << "7. Enter more rational numbers\n"
            << "8. Exit\n";
            cin>>choice;
            if(choice<1||choice>8)
            {cout << "Invalid entry\n" ;
                error=true;
            }
        }while(error);
        
        cout << endl;
        
        
        switch (choice)
        {
            case 1: // Sum of the two fractions
                cout<<endl;
                num1.output();
                cout<<" + ";
                num2.output();
                cout<<" = ";
                result=num1.Add(num2);
                result.output();
                cout<<endl;
                break;
            case 2: // The Difference
                num1.output();
                cout<<" - ";
                num2.output();
                cout<<" = ";
                result = num1.Sub(num2);
                result.output();
                cout<<endl;
                break;
            case 3: // The Product
                num1.output();
                cout<<" * ";
                num2.output();
                cout<<" = ";
                result = num1.Mul(num2);
                result.output();
                cout<<endl;
                break;
            case 4: // The Quotient
                num1.output();
                cout<<" / ";
                num2.output();
                cout<<" = ";
                result = num1.Div(num2);
                result.output();
                cout<<endl;
                break;
            case 5: if(num1.less(num2))
            {num1.output();
                cout<<"<";
                num2.output();
                cout<<endl;
            }
            else
            {num1.output();
                cout<<">=";
                num2.output();
                cout<<endl;
            }
                break;
            case 6: result=num1.neg();
                cout<<"negative of ";
                num1.output();
                cout<<"=";
                result.output();
                cout<<endl;
            case 7: num1.input();
                num2.input();
                break;
            case 8:
                return 0;
            default: cout << "Not an input between 1 and 7.\n";
                break;
        }
    }while(true);
    
}
bool rational::less(rational otherFraction)
{if(numerator*otherFraction.denominator<otherFraction.numerator*denominator)
    return true;
else
    return false;
}
rational rational::neg()
{rational negative;
    negative.numerator=numerator*-1;
    negative.denominator=denominator;
    return negative;
}

void rational::output()
{cout<<numerator<<"/"<<denominator<<" ";}

void rational::input()
{char choice,slash,trash;
    cout<<"Enter a fraction: ";
    do{
        cin>>numerator>>slash>>denominator;
        if(denominator==0)
            cout<<"Illegal denominator - retry\n";
    }while(denominator==0);
    trash=getchar();
    if(numerator<0&&denominator<0)
    {numerator*=-1;
        denominator*=-1;
    }
    else if(numerator>=0&&denominator<0)
    {numerator*=-1;
        denominator*=-1;
    }
}
rational::rational() // defaultructor
{
    
    numerator = 0;
    denominator = 0;
    
}
rational rational::Add(rational otherFraction)
{
    rational sum;
    sum.numerator = numerator*otherFraction.denominator+otherFraction.numerator*denominator;
    sum.denominator = denominator*otherFraction.denominator;
    return sum;
}

rational rational::Sub(rational otherFraction)
{
    rational difference;
    difference.numerator = numerator*otherFraction.denominator-otherFraction.numerator*denominator;
    difference.denominator = denominator*otherFraction.denominator;
    return difference;
}

rational rational::Mul(rational otherFraction)
{
    rational product;
    product.numerator = numerator*otherFraction.numerator;
    product.denominator = denominator*otherFraction.denominator;
    return product;
}

rational rational::Div(rational otherFraction)
{
    rational quotient;
    quotient.numerator = numerator*otherFraction.denominator;
    quotient.denominator = denominator*otherFraction.numerator;
    return quotient;
}