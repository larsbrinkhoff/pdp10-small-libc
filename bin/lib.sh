case "$PWD" in
*gcc/testsuite)
    TESTSUITE=true;;
*)
    TESTSUITE=false;;
esac

sixchar ()
{
    echo "$1" | head -c 6
}

absolute ()
{
    case "x$1" in
    x/*)
	echo "$1";;
    *)
	echo "$PWD/$1";;
    esac
}

DELETE ()
{
    $HERE/telnet-do "delete $1"
}

EXPUNGE ()
{
    $HERE/telnet-do "expunge $1"
}
