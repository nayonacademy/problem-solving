using System;
public class BankNotes{
    public static void countCurrency(int amount){
        int[] notes = new int[]{2000, 500, 200, 100, 50, 20, 10, 5, 1 };
        int[] noteCounter = new int[9];
        for(int i =0; i<9; i++){
            if (amount >= notes[i]){
                noteCounter[i] = amount / notes[i];
                amount = amount - noteCounter[i]*notes[i];
            }
        }

        // print notes
        for(int i = 0; i < 9; i++){
            Console.WriteLine(notes[i] + " : " + noteCounter[i] );
        }
    }
    public static void Main()
    {
        int amount = 868;
        countCurrency(amount);
    }
}