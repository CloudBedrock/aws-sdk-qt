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

#include "devicefarmrequest.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeviceFarmRequest
 *
 * \brief The DeviceFarmRequest class provides an interface for DeviceFarm requests.
 *
 * \ingroup DeviceFarm
 */

/*!
 * @brief  Constructs a new DeviceFarmRequest object.
 *
 * @param  action  The DeviceFarm action to request.
 */
DeviceFarmRequest::DeviceFarmRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DeviceFarmRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new DeviceFarmRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeviceFarmRequest::DeviceFarmRequest(const DeviceFarmRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DeviceFarmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
DeviceFarmRequest& DeviceFarmRequest::operator=(const DeviceFarmRequest &other)
{
    Q_D(DeviceFarmRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new DeviceFarmRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DeviceFarmRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
DeviceFarmRequest::DeviceFarmRequest(DeviceFarmRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the DeviceFarm action to be performed by this request.
 */
DeviceFarmRequest::Action DeviceFarmRequest::action() const
{
    Q_D(const DeviceFarmRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the DeviceFarm action to be performed by this request.
 */
QString DeviceFarmRequest::actionString() const
{
    return DeviceFarmRequestPrivate::toString(action());
}

/*!
 * \brief Returns the DeviceFarm API version implemented by this request.
 */
QString DeviceFarmRequest::apiVersion() const
{
    Q_D(const DeviceFarmRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the DeviceFarm action to be performed by this request to \a action.
 */
void DeviceFarmRequest::setAction(const Action action)
{
    Q_D(DeviceFarmRequest);
    d->action = action;
}

/*!
 * Set the DeviceFarm API version to include in this request to \a version.
 */
void DeviceFarmRequest::setApiVersion(const QString &version)
{
    Q_D(DeviceFarmRequest);
    d->apiVersion = version;
}

/*!
 * \brief Returns \c true if this request is the same as \a other.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool DeviceFarmRequest::operator==(const DeviceFarmRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid DeviceFarm queue name.
 *
 * @par From DeviceFarm FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DeviceFarm queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DeviceFarmRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int DeviceFarmRequest::clearParameter(const QString &name)
{
    Q_D(DeviceFarmRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void DeviceFarmRequest::clearParameters()
{
    Q_D(DeviceFarmRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant DeviceFarmRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DeviceFarmRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &DeviceFarmRequest::parameters() const
{
    Q_D(const DeviceFarmRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void DeviceFarmRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DeviceFarmRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void DeviceFarmRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DeviceFarmRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this DeviceFarm request using the given \a endpoint.
 *
 * This DeviceFarm implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest DeviceFarmRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const DeviceFarmRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  DeviceFarmRequestPrivate
 *
 * \brief  Private implementation for DeviceFarmRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new DeviceFarmRequestPrivate object.
 */
DeviceFarmRequestPrivate::DeviceFarmRequestPrivate(const DeviceFarmRequest::Action action, DeviceFarmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new DeviceFarmRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DeviceFarmRequest class's copy constructor.
 */
DeviceFarmRequestPrivate::DeviceFarmRequestPrivate(const DeviceFarmRequestPrivate &other,
                                     DeviceFarmRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts DeviceFarmRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DeviceFarm service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString DeviceFarmRequestPrivate::toString(const DeviceFarmRequest::Action &action)
{
    #define ActionToString(action) \
        case DeviceFarmRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DeviceFarm
} // namespace QtAws
