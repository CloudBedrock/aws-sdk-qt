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

#include "efsrequest.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::EFSRequest
 * \brief The EFSRequest class provides an interface for EFS requests.
 *
 * \inmodule QtAwsEFS
 */

/*!
 * \enum EFSRequest::Action
 *
 * This enum describes the actions that can be performed as EFS
 * requests.
 *
 * \value CreateFileSystemAction EFS CreateFileSystem action.
 * \value CreateMountTargetAction EFS CreateMountTarget action.
 * \value CreateTagsAction EFS CreateTags action.
 * \value DeleteFileSystemAction EFS DeleteFileSystem action.
 * \value DeleteMountTargetAction EFS DeleteMountTarget action.
 * \value DeleteTagsAction EFS DeleteTags action.
 * \value DescribeFileSystemsAction EFS DescribeFileSystems action.
 * \value DescribeMountTargetSecurityGroupsAction EFS DescribeMountTargetSecurityGroups action.
 * \value DescribeMountTargetsAction EFS DescribeMountTargets action.
 * \value DescribeTagsAction EFS DescribeTags action.
 * \value ModifyMountTargetSecurityGroupsAction EFS ModifyMountTargetSecurityGroups action.
 */

/*!
 * Constructs a[n] EFSRequest object for EFS \a action.
 */
EFSRequest::EFSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new EFSRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
EFSRequest::EFSRequest(const EFSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new EFSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the EFSRequest object to be equal to \a other.
 */
EFSRequest& EFSRequest::operator=(const EFSRequest &other)
{
    Q_D(EFSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa EFSRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from EFSRequestPrivate.
 */
EFSRequest::EFSRequest(EFSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the EFS action to be performed by this request.
 */
EFSRequest::Action EFSRequest::action() const
{
    Q_D(const EFSRequest);
    return d->action;
}

/*!
 * Returns the name of the EFS action to be performed by this request.
 */
QString EFSRequest::actionString() const
{
    return EFSRequestPrivate::toString(action());
}

/*!
 * Returns the EFS API version implemented by this request.
 */
QString EFSRequest::apiVersion() const
{
    Q_D(const EFSRequest);
    return d->apiVersion;
}

/*!
 * Sets the EFS action to be performed by this request to \a action.
 */
void EFSRequest::setAction(const Action action)
{
    Q_D(EFSRequest);
    d->action = action;
}

/*!
 * Sets the EFS API version to include in this request to \a version.
 */
void EFSRequest::setApiVersion(const QString &version)
{
    Q_D(EFSRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool EFSRequest::operator==(const EFSRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EFS queue name.
 *
 * @par From EFS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EFS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool EFSRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int EFSRequest::clearParameter(const QString &name)
{
    Q_D(EFSRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void EFSRequest::clearParameters()
{
    Q_D(EFSRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant EFSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const EFSRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &EFSRequest::parameters() const
{
    Q_D(const EFSRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void EFSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(EFSRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void EFSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(EFSRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EFS request using the given
 * \a endpoint.
 *
 * This EFS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest EFSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const EFSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EFS::EFSRequestPrivate
 * \brief The EFSRequestPrivate class provides private implementation for EFSRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a EFSRequestPrivate object for EFS \a action with,
 * public implementation \a q.
 */
EFSRequestPrivate::EFSRequestPrivate(const EFSRequest::Action action, EFSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the EFSRequest class's copy constructor.
 */
EFSRequestPrivate::EFSRequestPrivate(const EFSRequestPrivate &other,
                                     EFSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts EFSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the EFS service's Action
 * query parameters.
 */
QString EFSRequestPrivate::toString(const EFSRequest::Action &action)
{
    #define ActionToString(action) \
        case EFSRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EFS
} // namespace QtAws
