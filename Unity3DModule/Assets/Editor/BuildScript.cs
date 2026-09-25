using UnityEditor;
using UnityEngine;
using System.IO;

public class BuildScript
{
    public static void ExportAndroid()
    {
        string[] scenes = { "Assets/Scenes/SampleScene.unity" }; // Assuming default scene name, we will find out if not
        
        // Ensure scene array is populated properly with enabled scenes from build settings
        var buildScenes = EditorBuildSettings.scenes;
        if (buildScenes != null && buildScenes.Length > 0)
        {
            scenes = new string[buildScenes.Length];
            for (int i = 0; i < buildScenes.Length; i++)
            {
                scenes[i] = buildScenes[i].path;
            }
        }

        string exportPath = "C:/Users/gunja/Desktop/NEW-Outfit-Studio-/android_export_temp";
        if (Directory.Exists(exportPath))
            Directory.Delete(exportPath, true);
            
        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes = scenes;
        buildPlayerOptions.locationPathName = exportPath;
        buildPlayerOptions.target = BuildTarget.Android;
        buildPlayerOptions.options = BuildOptions.AcceptExternalModificationsToPlayer; // This acts like Export Project checkbox

        Debug.Log("Starting Android Export to " + exportPath);
        var report = BuildPipeline.BuildPlayer(buildPlayerOptions);
        
        if (report.summary.result == UnityEditor.Build.Reporting.BuildResult.Succeeded)
        {
            Debug.Log("Build succeeded: " + report.summary.totalSize + " bytes");
            EditorApplication.Exit(0);
        }
        else
        {
            Debug.LogError("Build failed!");
            EditorApplication.Exit(1);
        }
    }
}
