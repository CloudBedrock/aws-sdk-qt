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

#include "apigatewayrequest.h"
#include "apigatewayrequest_p.h"

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::APIGatewayRequest
 *
 * \brief The APIGatewayRequest class is the base class for all APIGateway requests.
 *
 * \ingroup APIGateway
 */

/*!
 * @brief  Constructs a new APIGatewayRequest object.
 *
 * @param  action  The APIGateway action to request.
 */
APIGatewayRequest::APIGatewayRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new APIGatewayRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new APIGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
APIGatewayRequest::APIGatewayRequest(const APIGatewayRequest &other)
    : QtAws::Core::AwsAbstractRequest(new APIGatewayRequestPrivate(*other.d_func(), this))
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
APIGatewayRequest& APIGatewayRequest::operator=(const APIGatewayRequest &other)
{
    Q_D(APIGatewayRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new APIGatewayRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from APIGatewayRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
APIGatewayRequest::APIGatewayRequest(APIGatewayRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the APIGateway action to be performed by this request.
 */
APIGatewayRequest::Action APIGatewayRequest::action() const
{
    Q_D(const APIGatewayRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the APIGateway action to be performed by this request.
 */
QString APIGatewayRequest::actionString() const
{
    return APIGatewayRequestPrivate::toString(action());
}

/*!
 * \brief Returns the APIGateway API version implemented by this request.
 */
QString APIGatewayRequest::apiVersion() const
{
    Q_D(const APIGatewayRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the APIGateway action to be performed by this request to \a action.
 */
void APIGatewayRequest::setAction(const Action action)
{
    Q_D(APIGatewayRequest);
    d->action = action;
}

/*!
 * Set the APIGateway API version to include in this request to \a version.
 */
void APIGatewayRequest::setApiVersion(const QString &version)
{
    Q_D(APIGatewayRequest);
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
bool APIGatewayRequest::operator==(const APIGatewayRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
 * @brief  Check if \a queueName is a valid APIGateway queue name.
 *
 * @par From APIGateway FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid APIGateway queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool APIGatewayRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int APIGatewayRequest::clearParameter(const QString &name)
{
    Q_D(APIGatewayRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void APIGatewayRequest::clearParameters()
{
    Q_D(APIGatewayRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant APIGatewayRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const APIGatewayRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &APIGatewayRequest::parameters() const
{
    Q_D(const APIGatewayRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void APIGatewayRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(APIGatewayRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void APIGatewayRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(APIGatewayRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this APIGateway request using the given \a endpoint.
 *
 * This APIGateway implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest APIGatewayRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const APIGatewayRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  APIGatewayRequestPrivate
 *
 * \brief  Private implementation for APIGatewayRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new APIGatewayRequestPrivate object.
 */
APIGatewayRequestPrivate::APIGatewayRequestPrivate(const APIGatewayRequest::Action action, APIGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new APIGatewayRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the APIGatewayRequest class's copy constructor.
 */
APIGatewayRequestPrivate::APIGatewayRequestPrivate(const APIGatewayRequestPrivate &other,
                                     APIGatewayRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts APIGatewayRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the APIGateway service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString APIGatewayRequestPrivate::toString(const APIGatewayRequest::Action &action)
{
    #define ActionToString(action) \
        case APIGatewayRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace APIGateway
} // namespace QtAws
