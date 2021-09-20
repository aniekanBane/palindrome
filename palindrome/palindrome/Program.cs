using System;
using System.Linq;
using System.Text;

namespace palindrome
{
    class MainClass
    {
        public static (bool, int) IsPalindrome(string str)
        {
            int len = str.Length;
            var sb = new StringBuilder();
            
            if (len <= 1) return (true, len);
            else
            {
                string test = str.ToLower();
                foreach (char ch in test)
                {
                    if (!char.IsWhiteSpace(ch) && !char.IsPunctuation(ch))
                        sb.Append(ch);                  
                }
                test = sb.ToString();
                var rev = new string(test.Reverse().ToArray());
                return test.Equals(rev) == true ? (true, len) : (false, 0);
            }          
        }

        static void Main(string[] args)
        {
            bool kg = true;
            Console.WriteLine("Is it a Palindrome ?");
            do
            {
                string s = Console.ReadLine();
                if (s == "exit") kg = false;
                else
                {
                    var tup = IsPalindrome(s);
                    Console.WriteLine($"Palindrome : {tup.Item1}, Lenght: {tup.Item2}");
                }
            } while (kg);
            
        }
    }
}
