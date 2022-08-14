/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/64434/
*/

using System;
using System.Collections.Generic;
using System.Linq;

namespace Quera {
    public static class Program {
        public static void Main() {
            var inputs = GetInputs<int>(' ');
            var n = inputs[0];
            var m = inputs[1];

            var xFilled = new string('X', m);
            var dotFilled = new string('.', m);

            var line = xFilled + dotFilled + xFilled;
            var middleLine = dotFilled + xFilled + dotFilled;

            for (var row = 0; row < n; row++)
                Console.WriteLine(line);
            for (var middleRow = 0; middleRow < n; middleRow++)
                Console.WriteLine(middleLine);
            for (var row = 0; row < n; row++)
                Console.WriteLine(line);
        }

        private static List<T> GetInputs<T>(char separator) =>
            Console.ReadLine()
                ?.Trim()
                .Split(separator)
                .Select(item => (T) Convert.ChangeType(item, typeof(T))).ToList();
    }
}