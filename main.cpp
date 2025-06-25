#include <iostream>

using namespace std;



int main()
{
    double inx=100, iny=100;
    double func1=-100,func2=-100;

    cout<<"Введите последовательно кооординаты точки по оси X и по оси Y"<<endl;
    do{

        cin>>inx>>iny;
        //cout<<"Кооордината точки a по оси X: "<<inx<<endl;
        //cout<<"Кооордината точки a по оси Y: "<<iny<<endl<<endl;

        if (inx>=-4 and inx<=-2) {
            func1 = 6.0 + 1.5*inx;
            func2 = -4.0/7.0 - (1.0/7.0)*inx;
            if (iny>=func1 or iny<func2)
                cout<<"Точка а НЕ ПОПАДАЕТ в указанную область"<<endl;
            else
                cout<<"Точка а ПОПАДАЕТ в указанную область"<<endl;

        }
        else {
            if (inx>-2 and inx<=0) {
                func1 = -2.0 - (5.0/2.0)*inx;
                func2 = -4.0/7.0 - (1.0/7.0)*inx;
                if ( func1>func2 ) {

                    if (iny>func1 or iny<func2)
                        cout<<"Точка а НЕ ПОПАДАЕТ в указанную область"<<endl;
                    else
                        cout<<"Точка а ПОПАДАЕТ в указанную область"<<endl;
                }

                else
                    if (func1 == func2) {
                        if (iny==func1)
                            cout<<"Точка а НЕ ПОПАДАЕТ в указанную область"<<endl;
                        else
                            cout<<"Точка а ПОПАДАЕТ в указанную область"<<endl;
                }
                    else
                        if (func1 < func2 ) {
                            if (iny<func1 or iny>func2)
                                cout<<"Точка а НЕ ПОПАДАЕТ в указанную область"<<endl;
                            else
                                cout<<"Точка а ПОПАДАЕТ в указанную область"<<endl;
            }
            }
            else
                if (inx>0 and inx<=3) {
                    func1 = - (1.0/7)*inx-4.0/7.0 ;
                    func2 = (1.0/3.0)*inx -2.0 ;

                    if (iny>func1 or iny<func2)
                        cout<<"Точка а НЕ ПОПАДАЕТ в указанную область"<<endl;
                    else
                        cout<<"Точка а ПОПАДАЕТ в указанную область"<<endl;
        }       else cout<<"Точка а НЕ ПОПАДАЕТ в указанную область"<<endl;


        }
        cout<<endl<<"-----------------------------------------------"<<endl;
        } while (inx!=99);



        return 0;
}
