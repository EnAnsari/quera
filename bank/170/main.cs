/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/3029/
*/

using System;
using System.Collections.Generic;
using System.Linq;

namespace Quera {
    public static class Program {
        public static void Main() {
            var man1 = GetInputs<int>(' ');
            var man2 = GetInputs<int>(' ');

            // X2 > X1 ? "Right" : "Left"
            Console.WriteLine(man2[0] > man1[0] ? "Right" : "Left");
        }

        private static List<T> GetInputs<T>(char separator) =>
            Console.ReadLine()
                ?.Trim()
                .Split(separator)
                .Select(item => (T) Convert.ChangeType(item, typeof(T))).ToList();
    }
}