<?hh // strict
namespace Decouple\DB_CLI;
use Decouple\DB\Contract\Schema;
use Decouple\DB_CLI\Contract\Seed as SeedContract;
abstract class Seed implements SeedContract {
  public function __construct(protected Schema $schema) { }
}
