#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void gcd(int n1, int n2)
    {
        QVector<int>ve1;
        QVector<int>ve2;
        int si1=0, j1=0;
        for(int i1=1;i1<=n1;i1++)
        {
            if(n1%i1==0)
            {
                si1++;
                ve1.resize(si1);
                ve1[j1] = i1;
                j1++;
            }
        }
        int si2=0, j2=0;
        for(int i2=1;i2<=n2;i2++)
        {
            if(n2%i2==0)
            {
                si2++;
                ve2.resize(si2);
                ve2[j2]=i2;
                j2++;
            }
        }
        QVector<int>ve3;
        int si3=0, j3=0;
        for(int i3=0;i3<si1;i3++)
        {
            for(int i4=0;i4<si2;i4++)
            {
                if(ve1[i3] == ve2[i4])
                {
                    si3++;
                    ve3.resize(si3);
                    ve3[j3] = ve1[i3];
                    j3++;
                }
            }
        }
        int max1=0;
        for(int i5=0;i5<si3;i5++)
        {
            if(ve3[i5] > max1)
            {   max1 = ve3[i5]; }
        }
        qDebug() << n1 << " -- " << ve1 << "\n" << n2 << "-- " << ve2 << "\n common = "
                 <<  ve3 << "\n gcd = " << max1;
    }
    
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.gcd(140,240);


    for(int i1=1;i1<100;i1++)
    {
//        int n1=qrand()%100;
//        int n2=qrand()%90;
    }
    return a.exec();
}
