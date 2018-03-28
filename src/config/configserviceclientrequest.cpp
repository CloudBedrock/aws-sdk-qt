/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "configserviceclientrequest.h"
#include "configserviceclientrequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  ConfigServiceClientRequest
 *
 * @brief  Interface class for providing ConfigService requests
 */


/**
 * @brief  Constructs a new ConfigServiceClientRequest object.
 *
 * @param  action  The ConfigService action to request.
 */
ConfigServiceClientRequest::ConfigServiceClientRequest(const Action action)
    : AwsAbstractRequest(new ConfigServiceClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ConfigServiceClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ConfigServiceClientRequest::ConfigServiceClientRequest(const ConfigServiceClientRequest &other)
    : AwsAbstractRequest(new ConfigServiceClientRequestPrivate(*other.d_func(), this))
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
ConfigServiceClientRequest& ConfigServiceClientRequest::operator=(const ConfigServiceClientRequest &other)
{
    Q_D(ConfigServiceClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ConfigServiceClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConfigServiceClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ConfigServiceClientRequest::ConfigServiceClientRequest(ConfigServiceClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ConfigService action to be performed by this request.
 *
 * @return The ConfigService action to be performed by this request.
 */
ConfigServiceClientRequest::Action ConfigServiceClientRequest::action() const
{
    Q_D(const ConfigServiceClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the ConfigService action to be performed by this request.
 *
 * @return The name of the ConfigService action to be performed by this request.
 */
QString ConfigServiceClientRequest::actionString() const
{
    return ConfigServiceClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the ConfigService API version implemented by this request.
 *
 * @return The ConfigService API version implmented by this request.
 */
QString ConfigServiceClientRequest::apiVersion() const
{
    Q_D(const ConfigServiceClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ConfigService action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ConfigServiceClientRequest::setAction(const Action action)
{
    Q_D(ConfigServiceClientRequest);
    d->action = action;
}

/**
 * @brief  Set the ConfigService API version to include in this request.
 *
 * @param  version  The ConfigService API version to include in this request.
 */
void ConfigServiceClientRequest::setApiVersion(const QString &version)
{
    Q_D(ConfigServiceClientRequest);
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
bool ConfigServiceClientRequest::operator==(const ConfigServiceClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ConfigService queue name.
 *
 * @par From ConfigService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ConfigService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ConfigServiceClientRequest::isValidQueueName(const QString &queueName)
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
int ConfigServiceClientRequest::clearParameter(const QString &name)
{
    Q_D(ConfigServiceClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ConfigServiceClientRequest::clearParameters()
{
    Q_D(ConfigServiceClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ConfigService request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ConfigServiceClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConfigServiceClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ConfigService request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ConfigServiceClientRequest::parameters() const
{
    Q_D(const ConfigServiceClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ConfigService request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ConfigServiceClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConfigServiceClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ConfigService request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ConfigServiceClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConfigServiceClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ConfigService request.
 *
 * This ConfigService implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ConfigService request using the given \a endpoint.
 */
QNetworkRequest ConfigServiceClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ConfigServiceClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ConfigServiceClientRequestPrivate
 *
 * @brief  Private implementation for ConfigServiceClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ConfigServiceClientRequestPrivate object.
 *
 * @param  action  ConfigService action being performed by the \a q request.
 * @param  q       Pointer to this object's public ConfigServiceClientRequest instance.
 */
ConfigServiceClientRequestPrivate::ConfigServiceClientRequestPrivate(const ConfigServiceClientRequest::Action action, ConfigServiceClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ConfigServiceClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConfigServiceClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ConfigServiceClientRequest instance.
 */
ConfigServiceClientRequestPrivate::ConfigServiceClientRequestPrivate(const ConfigServiceClientRequestPrivate &other,
                                     ConfigServiceClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ConfigService action to a string.
 *
 * This function converts ConfigServiceClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ConfigService service's Action
 * query parameters.
 *
 * @param  action  ConfigService action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ConfigServiceClientRequestPrivate::toString(const ConfigServiceClientRequest::Action &action)
{
    #define ActionToString(action) \
        case ConfigServiceClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ConfigService
} // namespace AWS
