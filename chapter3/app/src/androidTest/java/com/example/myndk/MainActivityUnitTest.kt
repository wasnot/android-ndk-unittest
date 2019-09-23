package com.example.myndk

import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.test.rule.ActivityTestRule
import kotlinx.android.synthetic.main.activity_main.*
import org.junit.Assert
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith


@RunWith(AndroidJUnit4::class)
class MainActivityUnitTest {
    @get:Rule
    val activityRule = ActivityTestRule(MainActivity::class.java)

    @Test
    fun contentViewTest() {
        Assert.assertNotEquals("Hello from Java", activityRule.activity.sample_text.text)
        Assert.assertEquals("Hello from C++", activityRule.activity.sample_text.text)
    }
}