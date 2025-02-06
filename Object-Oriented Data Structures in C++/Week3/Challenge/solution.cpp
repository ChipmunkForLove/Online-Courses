/* Class Pair has already been declared
 * as shown in the following comments:
 *
 * class Pair {
 * public:
 *   int *pa,*pb;
 *   Pair(int, int);
 *   Pair(const Pair &);
 *  ~Pair();
 * };
 *
 * Implement its member functions below.
 */

 
Pair::Pair(int a, int b) {
   pa = new int;
   pb = new int;
   *pa = a;
   *pb = b;
 }
 
Pair::Pair(const Pair &other) {
   pa = new int;
   pb = new int;
   *pa = *other.pa;
   *pb = *other.pb;
 }
 
Pair::~Pair() {
   delete pa; 
   delete pb;
 }
 
 
 /* Here is a main() function you can use
  * to check your implementation of the
  * class Pair member functions.
  */
