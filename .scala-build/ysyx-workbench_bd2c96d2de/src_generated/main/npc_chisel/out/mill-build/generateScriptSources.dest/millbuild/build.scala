
package npc_chisel.out.mill$minusbuild.generateScriptSources$u002Edest.millbuild



final class build$_ {
def args = build_sc.args$
def scriptPath = """npc_chisel/out/mill-build/generateScriptSources.dest/millbuild/build.sc"""
/*<script>*/
package millbuild

import _root_.mill.runner.MillBuildRootModule

object MiscInfo_build {
  implicit lazy val millBuildRootModuleInfo: _root_.mill.runner.MillBuildRootModule.Info = _root_.mill.runner.MillBuildRootModule.Info(
    Vector("/home/jimple/Documents/ysyx/ysyx-workbench/npc_chisel/out/mill-launcher/0.11.5.jar").map(_root_.os.Path(_)),
    _root_.os.Path("/home/jimple/Documents/ysyx/ysyx-workbench/npc_chisel"),
    _root_.os.Path("/home/jimple/Documents/ysyx/ysyx-workbench/npc_chisel"),
    _root_.scala.Seq()
  )
  implicit lazy val millBaseModuleInfo: _root_.mill.main.RootModule.Info = _root_.mill.main.RootModule.Info(
    millBuildRootModuleInfo.projectRoot,
    _root_.mill.define.Discover[build]
  )
}
import MiscInfo_build.{millBuildRootModuleInfo, millBaseModuleInfo}
object build extends build
class build extends _root_.mill.main.RootModule {

//MILL_ORIGINAL_FILE_PATH=/home/jimple/Documents/ysyx/ysyx-workbench/npc_chisel/build.sc
//MILL_USER_CODE_START_MARKER
// import Mill dependency
import mill._
import mill.scalalib._
import mill.scalalib.scalafmt.ScalafmtModule
import mill.scalalib.TestModule.Utest
// support BSP
import mill.bsp._

object playground extends ScalaModule with ScalafmtModule { m =>
  val useChisel5 = true
  override def scalaVersion = "2.13.10"
  override def scalacOptions = Seq(
    "-language:reflectiveCalls",
    "-deprecation",
    "-feature",
    "-Xcheckinit"
  )
  override def ivyDeps = Agg(
    if (useChisel5) ivy"org.chipsalliance::chisel:5.0.0" else
    ivy"edu.berkeley.cs::chisel3:3.6.0",
  )
  override def scalacPluginIvyDeps = Agg(
    if (useChisel5) ivy"org.chipsalliance:::chisel-plugin:5.0.0" else
    ivy"edu.berkeley.cs:::chisel3-plugin:3.6.0",
  )
  object test extends Tests with Utest {
    override def ivyDeps = m.ivyDeps() ++ Agg(
      ivy"com.lihaoyi::utest:0.8.1",
      if (useChisel5) ivy"edu.berkeley.cs::chiseltest:5.0.0" else
      ivy"edu.berkeley.cs::chiseltest:0.6.0",
    )
  }
  def repositoriesTask = T.task { Seq(
    coursier.MavenRepository("https://maven.aliyun.com/repository/central"),
    coursier.MavenRepository("https://repo.scala-sbt.org/scalasbt/maven-releases"),
  ) ++ super.repositoriesTask() }
}

}
/*</script>*/ /*<generated>*/
/*</generated>*/
}

object build_sc {
  private var args$opt0 = Option.empty[Array[String]]
  def args$set(args: Array[String]): Unit = {
    args$opt0 = Some(args)
  }
  def args$opt: Option[Array[String]] = args$opt0
  def args$: Array[String] = args$opt.getOrElse {
    sys.error("No arguments passed to this script")
  }

  lazy val script = new build$_

  def main(args: Array[String]): Unit = {
    args$set(args)
    script.hashCode() // hashCode to clear scalac warning about pure expression in statement position
  }
}

export build_sc.script as build

