<?hh // strict
namespace Decouple\DB_CLI;
use Decouple\DB\Contract\Schema;
use Decouple\DB_CLI\Contract\AwaitableSeed as AwaitableSeedContract;
abstract class AwaitableSeed implements AwaitableSeedContract {
  public function __construct(protected Schema $schema) { }
}
