// swift-tools-version:5.9
import PackageDescription

let package = Package(
    name: "funnelConnectSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "funnelConnectSDK",
            targets: ["funnelConnectSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "funnelConnectSDK",
            path: "./funnelConnectSDK.xcframework"
        ),
    ]
)
