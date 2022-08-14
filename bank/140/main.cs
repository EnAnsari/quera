/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/104588/
*/

using System;
using System.Collections.Generic;
using System.Linq;

namespace Quera {
    public static class Program {
        public static void Main() {
            var watermelons = GetInputs<int>(' ');

          var numOfTargets =  watermelons.Count(watermelon => watermelon >= 80);

          if (numOfTargets >= 3)
              Console.WriteLine("Mamma mia!");
          else if (numOfTargets >= 1)
              Console.WriteLine("Mamma mia!!");
          else
              Console.WriteLine("Mamma mia!!!");
        }

        private static List<T> GetInputs<T>(char separator) =>
            Console.ReadLine()
                ?.Trim()
                .Split(separator)
                .Select(item => (T) Convert.ChangeType(item, typeof(T))).ToList();
    }
}