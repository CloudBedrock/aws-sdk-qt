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

#include "workdocsclientrequest.h"
#include "workdocsclientrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  WorkDocsClientRequest
 *
 * @brief  Interface class for providing WorkDocs requests
 */


/**
 * @brief  Constructs a new WorkDocsClientRequest object.
 *
 * @param  action  The WorkDocs action to request.
 */
WorkDocsClientRequest::WorkDocsClientRequest(const Action action)
    : AwsAbstractRequest(new WorkDocsClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new WorkDocsClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
WorkDocsClientRequest::WorkDocsClientRequest(const WorkDocsClientRequest &other)
    : AwsAbstractRequest(new WorkDocsClientRequestPrivate(*other.d_func(), this))
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
WorkDocsClientRequest& WorkDocsClientRequest::operator=(const WorkDocsClientRequest &other)
{
    Q_D(WorkDocsClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new WorkDocsClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WorkDocsClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
WorkDocsClientRequest::WorkDocsClientRequest(WorkDocsClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the WorkDocs action to be performed by this request.
 *
 * @return The WorkDocs action to be performed by this request.
 */
WorkDocsClientRequest::Action WorkDocsClientRequest::action() const
{
    Q_D(const WorkDocsClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the WorkDocs action to be performed by this request.
 *
 * @return The name of the WorkDocs action to be performed by this request.
 */
QString WorkDocsClientRequest::actionString() const
{
    return WorkDocsClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the WorkDocs API version implemented by this request.
 *
 * @return The WorkDocs API version implmented by this request.
 */
QString WorkDocsClientRequest::apiVersion() const
{
    Q_D(const WorkDocsClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the WorkDocs action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void WorkDocsClientRequest::setAction(const Action action)
{
    Q_D(WorkDocsClientRequest);
    d->action = action;
}

/**
 * @brief  Set the WorkDocs API version to include in this request.
 *
 * @param  version  The WorkDocs API version to include in this request.
 */
void WorkDocsClientRequest::setApiVersion(const QString &version)
{
    Q_D(WorkDocsClientRequest);
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
bool WorkDocsClientRequest::operator==(const WorkDocsClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid WorkDocs queue name.
 *
 * @par From WorkDocs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WorkDocs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool WorkDocsClientRequest::isValidQueueName(const QString &queueName)
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
int WorkDocsClientRequest::clearParameter(const QString &name)
{
    Q_D(WorkDocsClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void WorkDocsClientRequest::clearParameters()
{
    Q_D(WorkDocsClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this WorkDocs request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant WorkDocsClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WorkDocsClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this WorkDocs request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &WorkDocsClientRequest::parameters() const
{
    Q_D(const WorkDocsClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this WorkDocs request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void WorkDocsClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WorkDocsClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this WorkDocs request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void WorkDocsClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WorkDocsClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this WorkDocs request.
 *
 * This WorkDocs implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this WorkDocs request using the given \a endpoint.
 */
QNetworkRequest WorkDocsClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const WorkDocsClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  WorkDocsClientRequestPrivate
 *
 * @brief  Private implementation for WorkDocsClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkDocsClientRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed by the \a q request.
 * @param  q       Pointer to this object's public WorkDocsClientRequest instance.
 */
WorkDocsClientRequestPrivate::WorkDocsClientRequestPrivate(const WorkDocsClientRequest::Action action, WorkDocsClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new WorkDocsClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WorkDocsClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public WorkDocsClientRequest instance.
 */
WorkDocsClientRequestPrivate::WorkDocsClientRequestPrivate(const WorkDocsClientRequestPrivate &other,
                                     WorkDocsClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and WorkDocs action to a string.
 *
 * This function converts WorkDocsClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WorkDocs service's Action
 * query parameters.
 *
 * @param  action  WorkDocs action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString WorkDocsClientRequestPrivate::toString(const WorkDocsClientRequest::Action &action)
{
    #define ActionToString(action) \
        case WorkDocsClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WorkDocs
} // namespace AWS
