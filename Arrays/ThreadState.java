// class demo extends Thread{
//     // public int counter=0;

//     public void print()
//     {
//         for(int i=0;i<10;i++)
//         {
//             System.out.println(currentThread().getName()+" "+i);
//         }
//         // System.out.println("counter="+this.counter);
//     }
//     public synchronized void run()
//     {
//         // System.out.println("Thread is running"); 
//         this.print();
//     }
// }
// class ThreadState{
//    public static void main(String args[])
//    {
//         demo d1=new demo();
//         demo d2=new demo();
//         // demo d2=new demo(); 
//         Thread t1=new Thread(d1,"shravani");
//         Thread t2=new Thread(d2,"krishna");
//         Thread t3=new Thread(d1,"soham");
//         t1.start();
//         t2.start();
//         t3.start();
//         // t3.start();
//         // d2.start();
//         try {
//             // Thread.sleep(500);
//             t1.join();
//             t2.join();
//             t3.join();
//         } catch (Exception e) {
//             System.out.println("Sleep");
//         }

//         // System.out.println("counter="+d1.counter);
//         // System.out.println("counter="+d2.counter);
//         System.out.println("Main Ends");
//         System.out.println("name="+t1.getName());
//         System.out.println("name="+t2.getName());
//    }   
// }



// class demo implements Runnable{
//     public void run()
//     {
//         System.out.println("Thread is running"); 
//     }
// }
// class ThreadState{

//    public static void main(String args[])
//    {
//         demo d1=new demo();
//         Thread t1=new Thread(d1);
//         t1.start();
//         try {
//             Thread.sleep(500);
//         } catch (InterruptedException e) {
//             System.out.println("Sleep");
//         }
//         System.out.println("Main Ends");
//    }   
// }


// if the sleep time is negative then IllegalArgumentException exception occurs




class demo implements Runnable {
    public int amount=100;
    public synchronized void withdraw(int amount)
    {
        if(this.amount<amount)
        {
            try {
                wait();
                this.amount-=amount;
            } catch (Exception e) {
                System.out.println("waiting");
            }
        }
        else{}
        System.out.println("amount withdrawed:"+amount);
    }
    public synchronized void deposite(int amount)
    {
        this.amount+=amount;
        System.out.println("amount added:"+this.amount);
        notify();
    }
    public void run()
    {
        if(Thread.currentThread().getName().equals("Shravani"))
        {
            this.withdraw(1000);
        }
        else{
            this.deposite(1000);
        }
    }
}
class ThreadState{
    public static void main(String args[])
    {
        demo d1=new demo();
        Thread t1=new Thread(d1,"Shravani");
        Thread t2=new Thread(d1,"Soham");

        t1.start();

       try {
            Thread.sleep(2000);
       } catch (Exception e) {
            System.out.println("exception");
       }

       t2.start();
       try {
        Thread.sleep(2000);
       } catch (Exception e) {
        System.out.println("exception");
       }
       System.out.println("current amout:"+d1.amount);
    }
}