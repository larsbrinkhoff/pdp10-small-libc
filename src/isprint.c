int
isprint (int c)
{
  return (c >= ' ' && c != 127) || c == '\t' || c == '\r' || c == '\n';
}
