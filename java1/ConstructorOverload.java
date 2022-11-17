class Box
{
    int l,b,h;
    Box()
    {
	l=10;
	b=20;
	h=30;
    }

    Box(int L,int B,int H)
    {
	l=L;
	b=B;
	h=H;
    }
    void Vol()
    {
	int v;
 	v=l*b*h;
	System.out.println("volume="+v);
    }
    void SetDim(int l,int b,int h)
    {
        this.l=l;
	this.b=b;
	this.h=h;
    }
    
}
class ConstructorOverload
{
    public static void main(String [] args)
    {
	Box b1=new Box();
	b1.Vol();
	Box b2=new Box(12,15,24);
	b2.Vol();
    }
}   
