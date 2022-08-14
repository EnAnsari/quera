/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/110014/
*/

using System;
using System.Collections.Generic;
using System.Linq;

namespace Quera {
    public static class Program {
        public static void Main() {
            var handsfree1 = GetInputs<string>(' ');
            var handsfree2 = GetInputs<string>(' ');

            if (handsfree1[0] == handsfree1[1] || handsfree2[0] == handsfree2[1] 
                || handsfree1[0] == handsfree2[1] || handsfree1[1] == handsfree2[0]){
                Console.WriteLine("YES");
            }
            else {
                Console.WriteLine("NO");
            }
        }
        
        private static List<T> GetInputs<T>(char separator) =>
            Console.ReadLine()
                ?.Trim()
                .Split(separator)
                .Select(item => (T) Convert.ChangeType(item, typeof(T))).ToList();
    }
}