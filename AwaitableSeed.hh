<?hh // strict
namespace Decouple\DBAL_CLI;
use Decouple\Common\Contract\DB\Schema;
use Decouple\DBAL_CLI\Contract\AwaitableSeed as AwaitableSeedContract;
abstract class AwaitableSeed implements AwaitableSeedContract {
  public function __construct(protected Schema $schema) { }
}
