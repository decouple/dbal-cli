<?hh // strict
namespace Decouple\DBAL_CLI;
use Decouple\Common\Contract\DB\Schema;
use Decouple\DBAL_CLI\Contract\Seed as SeedContract;
abstract class Seed implements SeedContract {
  public function __construct(protected Schema $schema) { }
}
