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

#include "invokerequest.h"
#include "invokerequest_p.h"
#include "invokeresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::InvokeRequest
 *
 * \brief The InvokeRequest class provides an interface for Lambda Invoke requests.
 *
 * \ingroup Lambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::invoke
 */

/*!
 * @brief  Constructs a new InvokeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InvokeRequest::InvokeRequest(const InvokeRequest &other)
    : LambdaRequest(new InvokeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new InvokeRequest object.
 */
InvokeRequest::InvokeRequest()
    : LambdaRequest(new InvokeRequestPrivate(LambdaRequest::InvokeAction, this))
{

}

/*!
 * \reimp
 */
bool InvokeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an InvokeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InvokeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * InvokeRequest::response(QNetworkReply * const reply) const
{
    return new InvokeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  InvokeRequestPrivate
 *
 * @brief  Private implementation for InvokeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new InvokeRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public InvokeRequest instance.
 */
InvokeRequestPrivate::InvokeRequestPrivate(
    const LambdaRequest::Action action, InvokeRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new InvokeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InvokeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InvokeRequest instance.
 */
InvokeRequestPrivate::InvokeRequestPrivate(
    const InvokeRequestPrivate &other, InvokeRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
