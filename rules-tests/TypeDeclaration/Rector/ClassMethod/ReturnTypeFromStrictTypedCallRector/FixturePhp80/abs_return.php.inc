<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnTypeFromStrictTypedCallRector\Fixture;

final class AbsReturn
{
    function aa($param)
    {
        return abs($param);
    }
}
?>
-----
<?php

namespace Rector\Tests\TypeDeclaration\Rector\ClassMethod\ReturnTypeFromStrictTypedCallRector\Fixture;

final class AbsReturn
{
    function aa($param): float|int
    {
        return abs($param);
    }
}
?>
