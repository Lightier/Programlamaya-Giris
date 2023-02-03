namespace GitHubProje
{
    class Basit İşlemler
    {
        static void Main(string[] args)
        {
            Double a,b;

            a = Convert.ToDouble(Console.ReadLine());
            b = Convert.ToDouble(Console.ReadLine());
            
            Console.WriteLine("Toplam =    " + (a + b));
            Console.WriteLine("Fark =    " + (a - b));
            Console.WriteLine("Çarpım =    " + (a * b));
            Console.WriteLine("Bölüm =    " + (a / b));
            Console.WriteLine("Kalan =    " + (a % b));
            
            Console.ReadLine();

        }
    }
}
