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

#include "cloud9request.h"
#include "cloud9request_p.h"

namespace QtAws {
namespace Cloud9 {

/**
 * @class  Cloud9Request
 *
 * @brief  Interface class for providing Cloud9 requests
 */


/**
 * @brief  Constructs a new Cloud9Request object.
 *
 * @param  action  The Cloud9 action to request.
 */
Cloud9Request::Cloud9Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Cloud9RequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new Cloud9Request object by copying another.
 *
 * @param  other  Instance to copy.
 */
Cloud9Request::Cloud9Request(const Cloud9Request &other)
    : QtAws::Core::AwsAbstractRequest(new Cloud9RequestPrivate(*other.d_func(), this))
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
Cloud9Request& Cloud9Request::operator=(const Cloud9Request &other)
{
    Q_D(Cloud9Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9Request object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Cloud9RequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
Cloud9Request::Cloud9Request(Cloud9RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Cloud9 action to be performed by this request.
 *
 * @return The Cloud9 action to be performed by this request.
 */
Cloud9Request::Action Cloud9Request::action() const
{
    Q_D(const Cloud9Request);
    return d->action;
}

/**
 * @brief Get the name of the Cloud9 action to be performed by this request.
 *
 * @return The name of the Cloud9 action to be performed by this request.
 */
QString Cloud9Request::actionString() const
{
    return Cloud9RequestPrivate::toString(action());
}

/**
 * @brief  Get the Cloud9 API version implemented by this request.
 *
 * @return The Cloud9 API version implmented by this request.
 */
QString Cloud9Request::apiVersion() const
{
    Q_D(const Cloud9Request);
    return d->apiVersion;
}

/**
 * @brief  Set the Cloud9 action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void Cloud9Request::setAction(const Action action)
{
    Q_D(Cloud9Request);
    d->action = action;
}

/**
 * @brief  Set the Cloud9 API version to include in this request.
 *
 * @param  version  The Cloud9 API version to include in this request.
 */
void Cloud9Request::setApiVersion(const QString &version)
{
    Q_D(Cloud9Request);
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
bool Cloud9Request::operator==(const Cloud9Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Cloud9 queue name.
 *
 * @par From Cloud9 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Cloud9 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool Cloud9Request::isValidQueueName(const QString &queueName)
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
int Cloud9Request::clearParameter(const QString &name)
{
    Q_D(Cloud9Request);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void Cloud9Request::clearParameters()
{
    Q_D(Cloud9Request);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Cloud9 request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant Cloud9Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Cloud9Request);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Cloud9 request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &Cloud9Request::parameters() const
{
    Q_D(const Cloud9Request);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Cloud9 request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void Cloud9Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Cloud9Request);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Cloud9 request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void Cloud9Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Cloud9Request);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Cloud9 request.
 *
 * This Cloud9 implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Cloud9 request using the given \a endpoint.
 */
QNetworkRequest Cloud9Request::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const Cloud9Request);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  Cloud9RequestPrivate
 *
 * @brief  Private implementation for Cloud9Request.
 */

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9RequestPrivate object.
 *
 * @param  action  Cloud9 action being performed by the \a q request.
 * @param  q       Pointer to this object's public Cloud9Request instance.
 */
Cloud9RequestPrivate::Cloud9RequestPrivate(const Cloud9Request::Action action, Cloud9Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new Cloud9RequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Cloud9Request class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public Cloud9Request instance.
 */
Cloud9RequestPrivate::Cloud9RequestPrivate(const Cloud9RequestPrivate &other,
                                     Cloud9Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Cloud9 action to a string.
 *
 * This function converts Cloud9Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Cloud9 service's Action
 * query parameters.
 *
 * @param  action  Cloud9 action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString Cloud9RequestPrivate::toString(const Cloud9Request::Action &action)
{
    #define ActionToString(action) \
        case Cloud9Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Cloud9
} // namespace QtAws
