// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "FunnelConnectSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "FunnelConnectSDK",
            targets: ["FunnelConnectSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "FunnelConnectSDK",
            path: "./FunnelConnectSDK.xcframework"
        ),
    ]
)
