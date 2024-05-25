package millbuild.`rocket-chip`.cde

import _root_.mill.runner.MillBuildRootModule

object MiscInfo_common {
  implicit lazy val millBuildRootModuleInfo: _root_.mill.runner.MillBuildRootModule.Info = _root_.mill.runner.MillBuildRootModule.Info(
    Vector("/home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/out/mill-launcher/0.11.7.jar").map(_root_.os.Path(_)),
    _root_.os.Path("/home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/cde"),
    _root_.os.Path("/home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC"),
  )
  implicit lazy val millBaseModuleInfo: _root_.mill.main.RootModule.Info = _root_.mill.main.RootModule.Info(
    millBuildRootModuleInfo.projectRoot,
    _root_.mill.define.Discover[common]
  )
}
import MiscInfo_common.{millBuildRootModuleInfo, millBaseModuleInfo}
object common extends common
class common extends _root_.mill.main.RootModule.Foreign(Some(_root_.mill.define.Segments.labels("foreign-modules", "rocket-chip", "cde", "common"))) {

//MILL_ORIGINAL_FILE_PATH=/home/jimple/Documents/ysyx/ysyx-workbench/ysyxSoC/rocket-chip/cde/common.sc
//MILL_USER_CODE_START_MARKER
import mill._
import scalalib._

trait CDEModule
  extends ScalaModule

trait CDETestModule
  extends TestModule
    with ScalaModule
    with TestModule.Utest {

  def cdeModule: CDEModule

  def utestIvy: Dep

  override def moduleDeps = super.moduleDeps ++ Some(cdeModule)

  override def ivyDeps = T(
    super.ivyDeps() ++ Agg(
      utestIvy
    )
  )

  override def defaultCommandName() = "test"
}

}