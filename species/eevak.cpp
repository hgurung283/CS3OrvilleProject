#include"species/eevak.h"
Eevak::Eevak() : _isRunnig (false)
{
}
bool Eevak::isRunning()
{
  return _isRunning;
}
void Eevak::run()
{
  _isRunning -true;
}
void Eevak:: stop()
{
  _isRunning -false;
}
#endf;
