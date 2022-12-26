unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char	r = 0;;
    int	i = 8;

    while (i--)
    {
		// r is a "pointer" from the right, octet is from the left. 
        r = (r << 1) | (octet & 1);
		// "read" from first of octet and put to last in r
        octet >>= 1;
    }
	// essentially reversed octet
    return (r);
}