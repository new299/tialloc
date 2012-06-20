#include "UnitTest.h"
#include "test_tialloc.h"

using namespace std;

int main(int argc,char ** argv) {
  UnitTest utf("41J Tests");

  test_tialloc(utf);

  utf.test_report();
}
