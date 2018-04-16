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

#include "registerdomainrequest.h"
#include "registerdomainrequest_p.h"
#include "registerdomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RegisterDomainRequest
 *
 * \brief The RegisterDomainRequest class provides an interface for SWF RegisterDomain requests.
 *
 * \ingroup SWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::registerDomain
 */

/*!
 * @brief  Constructs a new RegisterDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterDomainRequest::RegisterDomainRequest(const RegisterDomainRequest &other)
    : SWFRequest(new RegisterDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RegisterDomainRequest object.
 */
RegisterDomainRequest::RegisterDomainRequest()
    : SWFRequest(new RegisterDomainRequestPrivate(SWFRequest::RegisterDomainAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterDomainRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RegisterDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterDomainRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDomainResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RegisterDomainRequestPrivate
 *
 * @brief  Private implementation for RegisterDomainRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RegisterDomainRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RegisterDomainRequest instance.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const SWFRequest::Action action, RegisterDomainRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RegisterDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterDomainRequest instance.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const RegisterDomainRequestPrivate &other, RegisterDomainRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
