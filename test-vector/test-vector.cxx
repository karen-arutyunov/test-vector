#include <vector>

int main (int argc, char* argv[])
{
  using namespace std;

  vector<int> v1;
  v1.push_back (1);

  vector<int> v2 (move (v1));
  return v1.empty () ? 0 : 1;
}
