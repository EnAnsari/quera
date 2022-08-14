/*  powered by Rahmat
    Email: Rahmat2022a@gmail.com
    Github: https://github.com/EnAnsari
    question link: https://quera.org/problemset/10233/
*/

using System;
using System.Collections.Generic;
using System.Linq;

namespace Quera {
    public static class Program {
        public static void Main() {
            var number = GetInputs<string>(1).Single();

            var smallestNumber = number.OrderBy(digit => digit).ToList();

            var biggerNumber = FindBiggerNumber(smallestNumber, number, 0, "", false);

            Console.WriteLine(biggerNumber);
        }

        private static string FindBiggerNumber(IReadOnlyCollection<char> smallestNumber, string mainNumber, int targetIndex,
            string calcNumber, bool isCalcNumberBigger) {
            var digits = smallestNumber.Distinct(); //There is no difference between placing 2 or 2 or 2, so we only consider it once.
            
            if (!isCalcNumberBigger) {
                //We want to find the biggest number, so until we find the biggest number, we only consider the bigger or equal digits, otherwise it doesn't matter..
                digits = digits.Where(digit => digit >= mainNumber[targetIndex]);
            }
            
            foreach (var digit in digits) {
                var newNumber = calcNumber + digit;
                if (newNumber.Length >= mainNumber.Length) 
                    return newNumber;

                if (!isCalcNumberBigger)
                    isCalcNumberBigger = digit > mainNumber[targetIndex];
                
                var newList = smallestNumber.ToList();
                newList.Remove(digit);
                
                var biggerNumber = FindBiggerNumber(newList, mainNumber, targetIndex + 1, calcNumber + digit, isCalcNumberBigger);
                if (Convert.ToInt32(biggerNumber) > Convert.ToInt32(mainNumber)) {
                    return biggerNumber;
                }
            }

            return "0"; //No answer found.
        }

        private static List<T> GetInputs<T>(int count) {
            var result = new List<T>(count);
            for (var i = 0; i < count; i++) {
                result.Add((T) Convert.ChangeType(Console.ReadLine(), typeof(T)));
            }

            return result;
        }
    }
}