<?hh // strict
namespace Decouple\DB_CLI;
use Exception;
use Decouple\DB\Contract\Schema;
use Decouple\DB\Table\TableInterface;
use Decouple\DB\Table\Structure\TableStructure;
use Decouple\DB_CLI\Contract\Migration as MigrationContract;
abstract class Migration implements MigrationContract {
  protected string $name = '';
  protected TableStructure $table;
  public function __construct(protected Schema $schema) {
    if($this->name == '') {
      throw new Exception("Invalid migration name");
    }
    $this->table = new TableStructure($this->name);
  }
  public function getName() : string {
    return $this->name;
  }
  public function toString() : string {
    return $this->table->toString();
  }
  abstract public function up() : void;
  abstract public function down() : void;
}
