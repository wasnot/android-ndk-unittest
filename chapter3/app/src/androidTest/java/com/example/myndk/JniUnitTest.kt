package com.example.myndk

import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.filters.SmallTest
import androidx.test.rule.ActivityTestRule
import org.junit.Assert
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith


@RunWith(AndroidJUnit4::class)
@SmallTest
class JniUnitTest {
    @get:Rule
    val activityRule = ActivityTestRule(MainActivity::class.java)

    @Test
    fun mainActivity_stringFromJNI() {
        Assert.assertEquals("Hello from C++", activityRule.activity.stringFromJNI())
    }

    @Test
    fun testBridge_callInstanceMethod() {
        TestBridge().callInstanceMethod(activityRule.activity)
    }

    @Test
    fun testBridge_callStaticMethod() {
        TestBridge().callStaticMethod()
    }
}
