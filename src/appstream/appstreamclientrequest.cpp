/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "appstreamclientrequest.h"
#include "appstreamclientrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  AppStreamClientRequest
 *
 * @brief  Interface class for providing AppStream requests
 */


/**
 * @brief  Constructs a new AppStreamClientRequest object.
 *
 * @param  action  The AppStream action to request.
 */
AppStreamClientRequest::AppStreamClientRequest(const Action action)
    : AwsAbstractRequest(new AppStreamClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new AppStreamClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AppStreamClientRequest::AppStreamClientRequest(const AppStreamClientRequest &other)
    : AwsAbstractRequest(new AppStreamClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
AppStreamClientRequest& AppStreamClientRequest::operator=(const AppStreamClientRequest &other)
{
    Q_D(AppStreamClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new AppStreamClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AppStreamClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
AppStreamClientRequest::AppStreamClientRequest(AppStreamClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the AppStream action to be performed by this request.
 *
 * @return The AppStream action to be performed by this request.
 */
AppStreamClientRequest::Action AppStreamClientRequest::action() const
{
    Q_D(const AppStreamClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the AppStream action to be performed by this request.
 *
 * @return The name of the AppStream action to be performed by this request.
 */
QString AppStreamClientRequest::actionString() const
{
    return AppStreamClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the AppStream API version implemented by this request.
 *
 * @return The AppStream API version implmented by this request.
 */
QString AppStreamClientRequest::apiVersion() const
{
    Q_D(const AppStreamClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the AppStream action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void AppStreamClientRequest::setAction(const Action action)
{
    Q_D(AppStreamClientRequest);
    d->action = action;
}

/**
 * @brief  Set the AppStream API version to include in this request.
 *
 * @param  version  The AppStream API version to include in this request.
 */
void AppStreamClientRequest::setApiVersion(const QString &version)
{
    Q_D(AppStreamClientRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool AppStreamClientRequest::operator==(const AppStreamClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid AppStream queue name.
 *
 * @par From AppStream FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AppStream queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool AppStreamClientRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int AppStreamClientRequest::clearParameter(const QString &name)
{
    Q_D(AppStreamClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void AppStreamClientRequest::clearParameters()
{
    Q_D(AppStreamClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this AppStream request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant AppStreamClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AppStreamClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this AppStream request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &AppStreamClientRequest::parameters() const
{
    Q_D(const AppStreamClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this AppStream request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void AppStreamClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AppStreamClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this AppStream request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void AppStreamClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AppStreamClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this AppStream request.
 *
 * This AppStream implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this AppStream request using the given \a endpoint.
 */
QNetworkRequest AppStreamClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const AppStreamClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  AppStreamClientRequestPrivate
 *
 * @brief  Private implementation for AppStreamClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AppStreamClientRequestPrivate object.
 *
 * @param  action  AppStream action being performed by the \a q request.
 * @param  q       Pointer to this object's public AppStreamClientRequest instance.
 */
AppStreamClientRequestPrivate::AppStreamClientRequestPrivate(const AppStreamClientRequest::Action action, AppStreamClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AppStreamClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AppStreamClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AppStreamClientRequest instance.
 */
AppStreamClientRequestPrivate::AppStreamClientRequestPrivate(const AppStreamClientRequestPrivate &other,
                                     AppStreamClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and AppStream action to a string.
 *
 * This function converts AppStreamClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AppStream service's Action
 * query parameters.
 *
 * @param  action  AppStream action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString AppStreamClientRequestPrivate::toString(const AppStreamClientRequest::Action &action)
{
    #define ActionToString(action) \
        case AppStreamClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AppStream
} // namespace QtAws
