// automatically generated by wrap on 2010-Feb-23
#include <wrap/matlab.h>
#include <Test.h>
void mexFunction(int nargout, mxArray *out[], int nargin, const mxArray *in[])
{
  checkArguments("return_int",nargout,nargin-1,1);
  shared_ptr<Test> self = unwrap_shared_ptr< Test >(in[0],"Test");
  int value = unwrap< int >(in[1]);
  int result = self->return_int(value);
  out[0] = wrap< int >(result);
}
